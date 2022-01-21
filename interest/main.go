package main

import (
	"fmt"
	"math"
)

const periodicGebyrer float32 = 60

const loanGebyrer float32 = 3000

const million (uint32) = 1000000

const money = million * 2

//year
const savingYears = 15

//%
const inflationRate = 2

//%
const houseAppreciationRate = 2

//%
const DepositInterestRate = 1.8

//%
const LoanInterestRate = 2.4

func main() {
	fmt.Println("MONEY Calulator")
	fmt.Println("-----------------存钱--------------------")
	balance := bankDepositInterset(money, DepositInterestRate, savingYears)
	inflation := moneyDepreciation(balance, inflationRate, savingYears)
	houseAppreciation := moneyAppreciation(money, houseAppreciationRate, savingYears)

	fmt.Printf("Your saving account balance is %f \n", balance)
	fmt.Printf("Your balence is worse %f,  %v years late \n", inflation, savingYears)
	fmt.Printf("Your gain is %v \n", inflation-float32(money))

	totalP, totalIG := bankLoanEqualPrincipal(money, LoanInterestRate, savingYears)
	// totalInflation := moneyDepreciation(float32(money), inflationRate, savingYears)
	fmt.Println("-----------------等额本金--------------------")
	fmt.Printf("Your total Interset + Gebyrer is %f \n", totalIG)
	fmt.Printf("Your total payment is %f \n", totalP)

	pp, tp, tig := bankLoanEqualInstallments(money, LoanInterestRate, savingYears)
	tas := totalAnnualSpendAndSale(float32(money), savingYears)
	fmt.Println("-----------------等额本息--------------------")
	fmt.Printf("Your every month payment is %f \n", pp)
	fmt.Printf("Your total Interset + Gebyrer is %f \n", tig)
	fmt.Printf("Your total payment is %f \n", tp)

	tc := tp + tas

	fmt.Printf("Your total cost without rent is %f \n", tc)
	fmt.Printf("Your total cost with rent is %f \n", tc-totalRentalIncome(9000, savingYears))

	fmt.Printf("Your house worse is %f, %v years late \n", houseAppreciation, savingYears)
	fmt.Printf("Your gain without rent is %f \n", houseAppreciation-tc)
	fmt.Printf("Your gain with rent is %f \n", houseAppreciation-tc+totalRentalIncome(9000, savingYears))
}

func bankDepositInterset(amount uint32, rate float32, durationYear int) float32 {
	var result float32 = float32(amount)

	//复利
	// for i := 1; i <= duration_year; i++ {
	// 	result = result * (1 + rate/100)
	// }

	//单利
	result = result*(rate/100)*float32(durationYear) + float32(amount)
	return float32(result)
}

func moneyDepreciation(amount float32, rate float32, durationYear int) float32 {
	var result float32 = amount
	//贬值
	for i := 1; i <= durationYear; i++ {
		result = result * (1 - rate/100)
	}
	return float32(result)
}

func moneyAppreciation(amount uint32, rate float32, durationYear int) float32 {
	var result float32 = float32(amount)
	//增值
	for i := 1; i <= durationYear; i++ {
		result = result * (1 + rate/100)
	}
	return float32(result)
}

// func houseAppreciation(amount uint32, rate float32, durationYear int) float32 {
// 	var result float32 = float32(amount)
// 	//增值
// 	for i := 1; i <= durationYear; i++ {
// 		result = result * (1 + rate/100)
// 	}
// 	return float32(result)
// }

//等额本金 （每月偿还的贷款本金一样）
func bankLoanEqualPrincipal(amount uint32, rate float32, durationYear uint32) (float32, float32) {

	monthlyRate := rate / 12 / 100

	periods := durationYear * 12

	var monthlyPrincipal float32 = float32(amount / periods)

	var totalIntersetAndGebyrer float32 = 0

	for i := 0; i < int(periods); i++ {
		periodsInterset := monthlyRate * (float32(amount) - (monthlyPrincipal * float32(i)))
		totalIntersetAndGebyrer = totalIntersetAndGebyrer + periodsInterset + periodicGebyrer
	}

	totalPayment := float32(amount) + totalIntersetAndGebyrer + loanGebyrer

	return totalPayment, totalIntersetAndGebyrer
}

//等额本息 （每月偿还的金额一样）
func bankLoanEqualInstallments(amount uint32, rate float32, durationYear uint32) (float32, float32, float32) {

	periodicRate := rate / 12 / 100

	periods := durationYear * 12

	exponent := float32(math.Pow(float64((1 + periodicRate)), float64(periods)))

	periodocPaymentAmount := float32(amount)*((periodicRate*exponent)/(exponent-1)) + periodicGebyrer

	totalPayment := periodocPaymentAmount*float32(periods) + loanGebyrer

	totalIntersetAndGebyrer := totalPayment - float32(amount)

	return periodocPaymentAmount, totalPayment, totalIntersetAndGebyrer
}

func totalAnnualSpendAndSale(amount float32, durationYear int) float32 {

	var result float32 = amount*0.019 + 45000 + 3500*12*float32(durationYear) + 15000*float32(durationYear)

	return result
}

func totalRentalIncome(rent int, durationYear int) float32 {
	return float32(rent*12*durationYear) - float32(rent)*0.2
}

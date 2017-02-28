//
//  RechargeVC.h
//  StoreKit
//
//  Created by 夏远全 on 2017/2/21.
//  Copyright © 2017年 夏远全. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <StoreKit/StoreKit.h>

@interface RechargeVC : UIViewController<SKPaymentTransactionObserver,SKProductsRequestDelegate>
{
    int buyType;
}

- (void)requestProUpgradeProductData;

- (void)RequestProductData;

- (void)buy:(int)type;

- (void)paymentQueue:(SKPaymentQueue *)queue updatedTransactions:(NSArray *)transactions;

- (void)PurchasedTransaction: (SKPaymentTransaction *)transaction;

- (void)completeTransaction: (SKPaymentTransaction *)transaction;

- (void)failedTransaction: (SKPaymentTransaction *)transaction;

- (void)paymentQueueRestoreCompletedTransactionsFinished:(SKPaymentTransaction *)transaction;

- (void)paymentQueue:(SKPaymentQueue *) paymentQueue restoreCompletedTransactionsFailedWithError:(NSError *)error;

- (void)restoreTransaction: (SKPaymentTransaction *)transaction;-(void)provideContent:(NSString *)product;

- (void)recordTransaction:(NSString *)product;

@end

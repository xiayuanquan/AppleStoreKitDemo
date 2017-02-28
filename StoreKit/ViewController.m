//
//  ViewController.m
//  StoreKit
//
//  Created by 夏远全 on 2017/2/21.
//  Copyright © 2017年 夏远全. All rights reserved.
//

#import "ViewController.h"
#import "RechargeVC.h"

@interface ViewController ()

@end

@implementation ViewController


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
 
    RechargeVC *reVC = [[RechargeVC alloc] init];
    [self presentViewController:reVC animated:YES completion:nil];
}


@end

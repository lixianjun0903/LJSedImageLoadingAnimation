//
//  ViewController.m
//  LJSedImageLoadingAnimation
//
//  Created by lixianjun on 16/5/3.
//  Copyright © 2016年 lixianjun. All rights reserved.
//

#import "ViewController.h"
#import "LJImageViewTool.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIImageView * imageView  = [[UIImageView alloc] initWithFrame:CGRectMake(0, 100, [UIScreen mainScreen].bounds.size.width, 100)];
    [self.view addSubview:imageView];
    
//    [imageView MA_setIndicatorImageWithUrlString:nil placeHolder:nil imageView:nil];
    
    [LJImageViewTool MA_setIndicatorImageWithUrlString:@"http://wenwen.soso.com/p/20090901/20090901120123-329341688.jpg" placeHolder:nil imageView:imageView];
    
   }

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

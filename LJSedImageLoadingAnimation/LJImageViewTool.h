//
//  LJImageViewTool.h
//  LJSedImageLoadingAnimation
//
//  Created by lixianjun on 16/5/3.
//  Copyright © 2016年 lixianjun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LJImageViewTool : NSObject

/**
 *  设置普通图片加载
 */
+(void)MA_setImageWithUrlString:(NSString *)urlString placeHolder:(UIImage *)placeHolderImage imageView:(UIImageView *)imageView;

/**
 *  设置渐现图片加载
 */
+(void)MA_setChangeAlphaImageWithUrlString:(NSString *)urlString placeHolder:(UIImage *)placeHolderImage imageView:(UIImageView *)imageView;

/**
 *  设置菊花动画的等待图片
 */
+(void)MA_setIndicatorImageWithUrlString:(NSString *)urlString placeHolder:(UIImage *)placeHolderImage imageView:(UIImageView *)imageView;

/**
 *  清除图片缓存
 */
+ (void)MA_clearImageCache;
@end

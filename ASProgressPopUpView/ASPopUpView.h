//
//  ASPopUpView.h
//  ASProgressPopUpView
//
//  Created by Alan Skipp on 16/04/2013.
//  Copyright (c) 2014 Alan Skipp. All rights reserved.
//

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// This UIView subclass is used internally by ASProgressPopUpView
// The public API is declared in ASProgressPopUpView.h
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#import <UIKit/UIKit.h>

#define ARROW_LENGTH 13

@protocol ASPopUpViewDelegate <NSObject>
- (CGFloat)currentValueOffset; //expects value in the range 0.0 - 1.0
- (void)colorAnimationDidStart;
- (void)popUpViewDidHide;
@end

@interface ASPopUpView : UIView

@property (weak, nonatomic) id <ASPopUpViewDelegate> delegate;

- (UIColor *)color;
- (void)setColor:(UIColor *)color;
- (UIColor *)opaqueColor;

- (void)setTextColor:(UIColor *)textColor;
- (void)setFont:(UIFont *)font;
- (void)setString:(NSString *)string;

- (void)setAnimatedColors:(NSArray *)animatedColors withKeyTimes:(NSArray *)keyTimes;

- (void)setAnimationOffset:(CGFloat)offset;
- (void)setArrowCenterOffset:(CGFloat)offset;

- (CGSize)popUpSizeForString:(NSString *)string;

- (void)show;
- (void)hide;

@end
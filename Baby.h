//
//  Baby.h
//  协议
//
//  Created by zz on 16/1/11.
//
//

#import <Foundation/Foundation.h>
/**
 1.声明代理方法
 2.声明代理属性
 3.声明代理对象
 
 */
@class Baby;
@protocol BabyDelegate <NSObject>

- (void)lookBaby:(Baby *)baby;

@end

@interface Baby : NSObject

@property (nonatomic, weak) id<BabyDelegate> delegate;

- (void)babyCry;

@end

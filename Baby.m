//
//  Baby.m
//  协议
//
//  Created by zz on 16/1/11.
//
//

#import "Baby.h"

@implementation Baby

-(void)babyCry{
    
    
    if ([self.delegate respondsToSelector:@selector(lookBaby:)]) {
        [self.delegate lookBaby:self];
    }
}

@end

//
//  CKCylinderReversibleHeader.h
//
//
//  Created by Mac on 17/3/14.
//  Copyright (c) 2017年 kaicheng. All rights reserved.
//

#import "MJRefresh.h"

@interface CKCylinderReversibleHeader : MJRefreshHeader

+ (instancetype)headerWithPad:(CGFloat) pad RefreshingBlock:(MJRefreshComponentRefreshingBlock)refreshingBlock;

@property(nonatomic, strong) UIColor * cylinderColor;


-(void) startAnimation;

-(void)stopAnimation;

@end

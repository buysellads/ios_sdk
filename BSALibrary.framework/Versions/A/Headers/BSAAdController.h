//
//  BSAAdServer.h
//  BSATestSDK
//
//  Created by Joe Cortopassi on 3/27/13.
//  Copyright (c) 2013 BuySellAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BSACustomView.h"
#import "BSAStaticAd.h"


@protocol BSAAdControllerDelegate
@optional
- (void) adLoadedForView:(UIView *)view;
- (void) adLoadFailedForView:(UIView *)view;
- (void) adViewCreated:(UIView *)view;
- (void) adViewFailedToCreate:(UIView *)view;
@end


@interface BSAAdController : NSObject  <BSACustomViewDelegate>
@property (nonatomic, weak) id<BSAAdControllerDelegate> delegate;
@property (nonatomic, strong) UIView *customView;
@property (nonatomic, strong) BSAStaticAd *ad;
+ (id) createControllerFromZoneKey:(NSString *)zonekey;
+ (id) createControllerFromZoneKey:(NSString *)zonekey withDelegate:(id<BSAAdControllerDelegate>) adControllerDelegate;
+ (id) createControllerFromZoneKey:(NSString *)zonekey withCategory:(NSString *)category;
@end

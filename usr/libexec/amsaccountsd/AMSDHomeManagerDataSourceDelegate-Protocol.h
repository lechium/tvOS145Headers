//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AMSDHome, AMSDHomeCloudShare, AMSDHomeManagerDataSource;

@protocol AMSDHomeManagerDataSourceDelegate <NSObject>
- (void)homeManagerDataSource:(id <AMSDHomeManagerDataSource>)arg1 didReceiveCloudShare:(id <AMSDHomeCloudShare>)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)homeManagerDataSource:(id <AMSDHomeManagerDataSource>)arg1 didReceiveCloudDataRepairRequestForHome:(id <AMSDHome>)arg2;
- (void)homeManagerDataSource:(id <AMSDHomeManagerDataSource>)arg1 didChangeWithType:(unsigned long long)arg2;
@end


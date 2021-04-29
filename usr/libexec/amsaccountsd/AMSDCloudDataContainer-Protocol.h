//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AMSHashable-Protocol.h"

@class AMSBinaryPromise, AMSPromise, NSString, NSURL;
@protocol AMSDCloudDataDatabase, AMSDCloudDataShareToken;

@protocol AMSDCloudDataContainer <AMSHashable>
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> sharedDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> publicDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> privateDatabase;
@property(readonly, nonatomic) NSString *identifier;
- (AMSPromise *)status;
- (AMSBinaryPromise *)acceptShareURL:(NSURL *)arg1 withToken:(id <AMSDCloudDataShareToken>)arg2;
@end

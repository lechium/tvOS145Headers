//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AMSHashable-Protocol.h"

@class NSString;
@protocol AMSCloudDataRecordIdentifier;

@protocol AMSCloudDataRecord <AMSHashable>
- (void)setField:(id)arg1 forKey:(NSString *)arg2;
- (id)fieldForKey:(NSString *)arg1;
@property(nonatomic, readonly) NSString *type;
@property(nonatomic, readonly) id <AMSCloudDataRecordIdentifier> identifier;
@end


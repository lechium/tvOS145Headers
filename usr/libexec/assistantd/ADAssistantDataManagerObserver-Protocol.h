//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADAssistantDataManager, NSArray, NSString, SASetAssistantData;

@protocol ADAssistantDataManagerObserver <NSObject>

@optional
- (void)assistantDataManager:(ADAssistantDataManager *)arg1 didUpdateAssistantData:(SASetAssistantData *)arg2 meCards:(NSArray *)arg3 unredactedAnchor:(NSString *)arg4;
- (void)assistantDataManagerDictationHIPAAMDMStatusDidChange;
- (void)assistantDataManager:(ADAssistantDataManager *)arg1 didUpdateAssistantData:(SASetAssistantData *)arg2;
@end

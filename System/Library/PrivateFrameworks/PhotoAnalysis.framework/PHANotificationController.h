/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PGManager;

@interface PHANotificationController : NSObject {

	PGManager* _graphManager;

}
-(id)initWithGraphManager:(id)arg1 ;
-(void)fireNotificationForSuggestionIdentifiers:(id)arg1 ;
-(void)postNotificationForMemory:(id)arg1 withCreationReason:(unsigned long long)arg2 forceImmediateDelivery:(BOOL)arg3 ;
-(void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(BOOL)shouldFireNotificationForMemories:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(BOOL)userIsActivelyUsingPhotos;
-(id)bestDateForDeliveringNotification;
-(void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2 ;
@end


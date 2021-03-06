/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSMutableDictionary, NSDate;

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {

	NSMutableDictionary* _relevanceProviderMap;
	NSDate* _lastDateUpdate;

}
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_supportsHistoricProviders;
-(void)dealloc;
-(void)resume;
-(void)pause;
-(id)initWithQueue:(id)arg1 ;
-(void)_handleSignificantTimeChange;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(void)_handleActionPerformedNotifiction:(id)arg1 ;
-(void)_scheduleUpdatesForActionProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(void)_removeProvider:(id)arg1 ;
@end


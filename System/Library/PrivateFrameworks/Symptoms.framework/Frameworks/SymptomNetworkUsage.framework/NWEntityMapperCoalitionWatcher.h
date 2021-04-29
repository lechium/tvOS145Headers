/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary;

@interface NWEntityMapperCoalitionWatcher : NWEntityMapper {

	NSMutableDictionary* _uuidCoalitionNameMap;

}
-(id)init;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
-(void)_uuidCoalitionNameMapPrune;
-(BOOL)noteUUID:(id)arg1 forPid:(int)arg2 ;
@end


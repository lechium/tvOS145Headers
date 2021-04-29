/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface BYChronicle : NSObject {

	NSMutableDictionary* _featureEntries;

}

@property (nonatomic,retain) NSMutableDictionary * featureEntries;              //@synthesize featureEntries=_featureEntries - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addEntry:(id)arg1 forFeature:(unsigned long long)arg2 ;
-(NSMutableDictionary *)featureEntries;
-(void)recordFeatureShown:(unsigned long long)arg1 ;
-(id)entryForFeature:(unsigned long long)arg1 ;
-(void)setFeatureEntries:(NSMutableDictionary *)arg1 ;
@end


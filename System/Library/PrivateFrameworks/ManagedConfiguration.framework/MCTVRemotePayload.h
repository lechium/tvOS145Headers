/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCTVRemotePayload : MCPayload {

	NSArray* _allowedTVs;
	NSArray* _allowedRemotes;

}

@property (nonatomic,retain) NSArray * allowedTVs;                  //@synthesize allowedTVs=_allowedTVs - In the implementation block
@property (nonatomic,retain) NSArray * allowedRemotes;              //@synthesize allowedRemotes=_allowedRemotes - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)restrictions;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAllowedRemotes:(NSArray *)arg1 ;
-(void)setAllowedTVs:(NSArray *)arg1 ;
-(NSArray *)allowedRemotes;
-(NSArray *)allowedTVs;
@end

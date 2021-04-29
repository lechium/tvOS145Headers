/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBPersonalAutomationSuggestionEvent : PBCodable <NSCopying> {

	NSString* _activityType;
	NSString* _appBundleIdentifier;
	NSString* _intentType;
	NSString* _key;
	NSString* _source;
	NSString* _triggerType;
	BOOL _completed;
	BOOL _interacted;
	BOOL _visible;
	SCD_Struct_WF9 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentType; 
@property (nonatomic,retain) NSString * intentType;                       //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                           //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasVisible; 
@property (assign,nonatomic) BOOL visible;                                //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL hasInteracted; 
@property (assign,nonatomic) BOOL interacted;                             //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityType; 
@property (nonatomic,retain) NSString * activityType;                     //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerType; 
@property (nonatomic,retain) NSString * triggerType;                      //@synthesize triggerType=_triggerType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)activityType;
-(BOOL)completed;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(BOOL)visible;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(NSString *)appBundleIdentifier;
-(BOOL)hasSource;
-(void)setTriggerType:(NSString *)arg1 ;
-(BOOL)hasTriggerType;
-(NSString *)triggerType;
-(void)setHasVisible:(BOOL)arg1 ;
-(BOOL)hasVisible;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)setIntentType:(NSString *)arg1 ;
-(NSString *)intentType;
-(BOOL)hasIntentType;
-(BOOL)hasKey;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasActivityType;
-(void)setInteracted:(BOOL)arg1 ;
-(void)setHasInteracted:(BOOL)arg1 ;
-(BOOL)hasInteracted;
-(BOOL)interacted;
-(BOOL)hasAppBundleIdentifier;
@end

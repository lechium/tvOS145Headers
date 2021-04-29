/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSString, NSArray, NSSet, NSDate, NSData, NSDictionary;

@interface AXSSPunctuationGroup : NSObject {

	BOOL _inCloud;
	BOOL _inDatabase;
	unsigned short _version;
	NSUUID* _uuid;
	NSString* _name;
	NSArray* _entries;
	NSSet* _autoSwitchContexts;
	NSUUID* _basePunctuationUUID;
	NSString* _ckChangeTag;
	NSDate* _lastModifiedDate;
	NSDate* _ckRecordProcessDate;

}

@property (nonatomic,retain) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * entries;                            //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) NSSet * autoSwitchContexts;                   //@synthesize autoSwitchContexts=_autoSwitchContexts - In the implementation block
@property (nonatomic,retain) NSUUID * basePunctuationUUID;                 //@synthesize basePunctuationUUID=_basePunctuationUUID - In the implementation block
@property (assign,nonatomic) unsigned short version;                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL inCloud;                                 //@synthesize inCloud=_inCloud - In the implementation block
@property (nonatomic,retain) NSString * ckChangeTag;                       //@synthesize ckChangeTag=_ckChangeTag - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                    //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * ckRecordProcessDate;                 //@synthesize ckRecordProcessDate=_ckRecordProcessDate - In the implementation block
@property (assign,nonatomic) BOOL inDatabase;                              //@synthesize inDatabase=_inDatabase - In the implementation block
@property (nonatomic,readonly) BOOL isSystemPunctuationGroup; 
@property (nonatomic,readonly) NSData * jsonRepresentation; 
@property (nonatomic,readonly) NSDictionary * jsonDictionary; 
+(id)punctuationGroupFromJSONRepresentation:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)entries;
-(unsigned short)version;
-(void)setVersion:(unsigned short)arg1 ;
-(NSUUID *)uuid;
-(NSDate *)lastModifiedDate;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSData *)jsonRepresentation;
-(void)setEntries:(NSArray *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDictionary *)jsonDictionary;
-(BOOL)inCloud;
-(BOOL)isSystemPunctuationGroup;
-(NSUUID *)basePunctuationUUID;
-(void)setBasePunctuationUUID:(NSUUID *)arg1 ;
-(NSSet *)autoSwitchContexts;
-(void)setAutoSwitchContexts:(NSSet *)arg1 ;
-(void)setInCloud:(BOOL)arg1 ;
-(void)setCkChangeTag:(NSString *)arg1 ;
-(void)setCkRecordProcessDate:(NSDate *)arg1 ;
-(NSString *)ckChangeTag;
-(NSDate *)ckRecordProcessDate;
-(void)setInDatabase:(BOOL)arg1 ;
-(BOOL)inDatabase;
@end

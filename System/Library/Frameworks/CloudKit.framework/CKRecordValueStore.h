/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordKeyValueSetting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableSet, CKRecord, NSString;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {

	BOOL _trackChanges;
	NSMutableDictionary* _values;
	NSMutableDictionary* _originalValues;
	NSMutableSet* _changedKeysSet;
	CKRecord* _record;

}

@property (assign,nonatomic) BOOL trackChanges;                                 //@synthesize trackChanges=_trackChanges - In the implementation block
@property (assign,nonatomic,__weak) CKRecord * record;                          //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * values;                      //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * originalValues;              //@synthesize originalValues=_originalValues - In the implementation block
@property (nonatomic,retain) NSMutableSet * changedKeysSet;                     //@synthesize changedKeysSet=_changedKeysSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)values;
-(id)allKeys;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
-(void)setValues:(NSMutableDictionary *)arg1 ;
-(id)recordID;
-(id)initWithRecord:(id)arg1 ;
-(CKRecord *)record;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)_validateRecordKey:(id)arg1 ;
-(void)_validateKeyUniquenessForKey:(id)arg1 ;
-(void)_validateRecordValue:(id)arg1 ;
-(void)setObjectNoValidate:(id)arg1 forKey:(id)arg2 ;
-(void)_sanitizeRecordValue:(id)arg1 ;
-(BOOL)trackChanges;
-(NSMutableSet *)changedKeysSet;
-(BOOL)checkPropertiesWithModifiedPropertiesOnly:(BOOL)arg1 includingAllArrayItems:(BOOL)arg2 withValueCheckBlock:(/*^block*/id)arg3 ;
-(id)changedKeys;
-(NSMutableDictionary *)originalValues;
-(void)setOriginalValues:(NSMutableDictionary *)arg1 ;
-(void)setChangedKeysSet:(NSMutableSet *)arg1 ;
-(void)setTrackChanges:(BOOL)arg1 ;
-(void)resetChangedKeys;
-(BOOL)checkProperties:(BOOL)arg1 withValueCheckBlock:(/*^block*/id)arg2 ;
-(void)setRecord:(CKRecord *)arg1 ;
@end


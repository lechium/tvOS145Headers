/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSMutableArray, HKConceptIdentifier, NSString, NSSet, HKConceptAttribute, HKMedicalCoding;

@interface HKConcept : NSObject <NSSecureCoding> {

	NSArray* _relationships;
	NSMutableArray* _attributes;
	BOOL _relationshipsAreLoaded;
	BOOL _isUndefined;
	HKConceptIdentifier* _identifier;
	NSString* _nodeName;

}

@property (nonatomic,copy) NSString * nodeName;                                     //@synthesize nodeName=_nodeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredName; 
@property (nonatomic,copy,readonly) NSString * localizedPreferredName; 
@property (nonatomic,copy,readonly) HKConceptIdentifier * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * validInRegions; 
@property (nonatomic,copy,readonly) NSArray * attributes; 
@property (nonatomic,copy,readonly) NSArray * relationships; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) BOOL relationshipsAreLoaded;                         //@synthesize relationshipsAreLoaded=_relationshipsAreLoaded - In the implementation block
@property (nonatomic,readonly) BOOL isUndefined;                                    //@synthesize isUndefined=_isUndefined - In the implementation block
@property (nonatomic,readonly) BOOL isAdHoc; 
@property (nonatomic,readonly) BOOL isNebulous; 
@property (nonatomic,readonly) BOOL chartsBloodPressure; 
@property (nonatomic,readonly) BOOL hidesOutOfRangeFilter; 
@property (nonatomic,copy,readonly) NSArray * synonyms; 
@property (nonatomic,copy,readonly) HKConceptAttribute * adHocCode; 
@property (nonatomic,copy,readonly) HKMedicalCoding * LOINCCode; 
@property (nonatomic,copy,readonly) HKMedicalCoding * RxNormCoding; 
@property (nonatomic,copy,readonly) HKConcept * groupByConcept; 
@property (nonatomic,copy,readonly) HKConcept * chartedWithConcept; 
@property (nonatomic,copy,readonly) HKConcept * strength; 
@property (nonatomic,copy,readonly) HKConcept * form; 
@property (nonatomic,copy,readonly) NSArray * modifiers; 
@property (nonatomic,copy,readonly) NSArray * brandNames; 
+(BOOL)supportsSecureCoding;
+(id)preferredLanguages;
+(id)fallbackLanguagesForLocale:(id)arg1 ;
+(id)conceptWithIdentifier:(id)arg1 attributes:(id)arg2 relationships:(id)arg3 ;
+(id)_conceptWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKConceptIdentifier *)identifier;
-(long long)version;
-(NSArray *)attributes;
-(void)addAttribute:(id)arg1 ;
-(NSString *)preferredName;
-(BOOL)isUndefined;
-(NSString *)nodeName;
-(HKConcept *)form;
-(HKConcept *)strength;
-(NSArray *)relationships;
-(void)setRelationships:(NSArray *)arg1 ;
-(NSArray *)synonyms;
-(void)setNodeName:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 attributes:(id)arg2 relationships:(id)arg3 relationshipsAreLoaded:(BOOL)arg4 ;
-(HKConceptAttribute *)adHocCode;
-(id)_firstConceptOfRelationshipType:(long long)arg1 ;
-(id)firstAttributeForType:(long long)arg1 ;
-(void)enumerateAttributesWithType:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)stringsForAttributeType:(long long)arg1 ;
-(id)_conceptsOfRelationshipType:(long long)arg1 ;
-(HKConcept *)groupByConcept;
-(HKConcept *)chartedWithConcept;
-(NSSet *)validInRegions;
-(NSString *)localizedPreferredName;
-(id)attributesForType:(long long)arg1 ;
-(BOOL)isAdHoc;
-(BOOL)isNebulous;
-(BOOL)chartsBloodPressure;
-(BOOL)hidesOutOfRangeFilter;
-(NSArray *)brandNames;
-(HKMedicalCoding *)LOINCCode;
-(NSArray *)modifiers;
-(HKMedicalCoding *)RxNormCoding;
-(BOOL)relationshipsAreLoaded;
@end


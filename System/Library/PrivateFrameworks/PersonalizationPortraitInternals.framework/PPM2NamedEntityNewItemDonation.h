/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2NamedEntityNewItemDonation : PBCodable <NSCopying> {

	long long _rank;
	NSString* _activeTreatments;
	int _algorithm;
	int _category;
	int _donationSource;
	NSString* _dynamicCategory;
	NSString* _groupId;
	BOOL _newItem;
	BOOL _userCreated;
	SCD_Struct_PP5 _has;

}

@property (assign,nonatomic) BOOL hasDonationSource; 
@property (assign,nonatomic) int donationSource;                       //@synthesize donationSource=_donationSource - In the implementation block
@property (assign,nonatomic) BOOL hasCategory; 
@property (assign,nonatomic) int category;                             //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasDynamicCategory; 
@property (nonatomic,retain) NSString * dynamicCategory;               //@synthesize dynamicCategory=_dynamicCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupId; 
@property (nonatomic,retain) NSString * groupId;                       //@synthesize groupId=_groupId - In the implementation block
@property (assign,nonatomic) BOOL hasNewItem; 
@property (assign,nonatomic) BOOL newItem;                             //@synthesize newItem=_newItem - In the implementation block
@property (assign,nonatomic) BOOL hasAlgorithm; 
@property (assign,nonatomic) int algorithm;                            //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
@property (assign,nonatomic) BOOL hasUserCreated; 
@property (assign,nonatomic) BOOL userCreated;                         //@synthesize userCreated=_userCreated - In the implementation block
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) long long rank;                           //@synthesize rank=_rank - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)algorithm;
-(void)setAlgorithm:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRank:(long long)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(BOOL)hasRank;
-(long long)rank;
-(void)setHasCategory:(BOOL)arg1 ;
-(BOOL)hasCategory;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(void)setUserCreated:(BOOL)arg1 ;
-(NSString *)groupId;
-(void)setGroupId:(NSString *)arg1 ;
-(BOOL)hasGroupId;
-(BOOL)userCreated;
-(BOOL)hasAlgorithm;
-(NSString *)dynamicCategory;
-(BOOL)hasActiveTreatments;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(int)donationSource;
-(void)setDonationSource:(int)arg1 ;
-(void)setHasDonationSource:(BOOL)arg1 ;
-(BOOL)hasDonationSource;
-(id)donationSourceAsString:(int)arg1 ;
-(int)StringAsDonationSource:(id)arg1 ;
-(void)setHasAlgorithm:(BOOL)arg1 ;
-(id)algorithmAsString:(int)arg1 ;
-(int)StringAsAlgorithm:(id)arg1 ;
-(void)setNewItem:(BOOL)arg1 ;
-(void)setHasNewItem:(BOOL)arg1 ;
-(BOOL)hasNewItem;
-(void)setHasUserCreated:(BOOL)arg1 ;
-(BOOL)hasUserCreated;
-(BOOL)newItem;
-(BOOL)hasDynamicCategory;
-(void)setDynamicCategory:(NSString *)arg1 ;
@end


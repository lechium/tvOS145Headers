/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSUUID, NSArray, NSString, NSDictionary;

@interface _PSPredictionContext : NSObject <NSSecureCoding> {

	BOOL _showPotentialFamilyMembers;
	NSDate* _suggestionDate;
	NSUUID* _locationUUID;
	NSArray* _locationUUIDs;
	long long _locationType;
	NSString* _bundleID;
	NSString* _accountIdentifier;
	NSArray* _seedRecipients;
	NSArray* _candidateShareExtensionBundleIds;
	NSDictionary* _appBundleIdsToShareExtensionBundleIdsMapping;
	NSArray* _attachments;
	NSArray* _photoSuggestedPeople;

}

@property (nonatomic,copy) NSDate * suggestionDate;                                                  //@synthesize suggestionDate=_suggestionDate - In the implementation block
@property (nonatomic,copy) NSUUID * locationUUID;                                                    //@synthesize locationUUID=_locationUUID - In the implementation block
@property (nonatomic,copy) NSArray * locationUUIDs;                                                  //@synthesize locationUUIDs=_locationUUIDs - In the implementation block
@property (assign,nonatomic) long long locationType;                                                 //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                             //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * seedRecipients;                                                 //@synthesize seedRecipients=_seedRecipients - In the implementation block
@property (nonatomic,copy) NSArray * candidateShareExtensionBundleIds;                               //@synthesize candidateShareExtensionBundleIds=_candidateShareExtensionBundleIds - In the implementation block
@property (nonatomic,copy) NSDictionary * appBundleIdsToShareExtensionBundleIdsMapping;              //@synthesize appBundleIdsToShareExtensionBundleIdsMapping=_appBundleIdsToShareExtensionBundleIdsMapping - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                                  //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) NSArray * photoSuggestedPeople;                                           //@synthesize photoSuggestedPeople=_photoSuggestedPeople - In the implementation block
@property (assign,nonatomic) BOOL showPotentialFamilyMembers;                                        //@synthesize showPotentialFamilyMembers=_showPotentialFamilyMembers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setLocationType:(long long)arg1 ;
-(long long)locationType;
-(NSArray *)locationUUIDs;
-(NSUUID *)locationUUID;
-(void)setLocationUUID:(NSUUID *)arg1 ;
-(BOOL)showPotentialFamilyMembers;
-(NSDate *)suggestionDate;
-(NSArray *)photoSuggestedPeople;
-(void)setPhotoSuggestedPeople:(NSArray *)arg1 ;
-(void)setLocationUUIDs:(NSArray *)arg1 ;
-(void)setSuggestionDate:(NSDate *)arg1 ;
-(NSArray *)seedRecipients;
-(void)setSeedRecipients:(NSArray *)arg1 ;
-(NSArray *)candidateShareExtensionBundleIds;
-(void)setCandidateShareExtensionBundleIds:(NSArray *)arg1 ;
-(NSDictionary *)appBundleIdsToShareExtensionBundleIdsMapping;
-(void)setAppBundleIdsToShareExtensionBundleIdsMapping:(NSDictionary *)arg1 ;
-(void)setShowPotentialFamilyMembers:(BOOL)arg1 ;
@end


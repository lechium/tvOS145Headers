/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContact.h>

@class NSString, NSData, NSArray, CNContactKeyVector, NSDictionary, NSDate, CNContact, CNActivityAlert, NSDateComponents;

@interface CNMutableContact : CNContact {

	BOOL _hasChanges;
	NSString* _cropRectID;
	NSData* _cropRectHash;

}

@property (copy) NSString * nameTitle; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (copy) NSString * maidenName; 
@property (copy) NSString * phoneticFirstName; 
@property (copy) NSString * phoneticLastName; 
@property (copy) NSString * companyName; 
@property (copy) NSArray * relatedNames; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (assign,nonatomic) BOOL imageDataAvailable; 
@property (nonatomic,copy) NSArray * calendarURIs; 
@property (nonatomic,copy) NSString * cardDAVUID; 
@property (nonatomic,copy) CNContactKeyVector * availableKeyDescriptor; 
@property (nonatomic,copy) NSString * storeIdentifier; 
@property (nonatomic,copy) NSDictionary * storeInfo; 
@property (nonatomic,copy) NSString * searchIndex; 
@property (nonatomic,copy) NSDictionary * activityAlerts; 
@property (nonatomic,copy) NSString * sectionForSortingByGivenName; 
@property (nonatomic,copy) NSString * sectionForSortingByFamilyName; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) CNContact * snapshot; 
@property (assign,getter=isPreferredForName,nonatomic) BOOL preferredForName; 
@property (assign,getter=isPreferredForImage,nonatomic) BOOL preferredForImage; 
@property (nonatomic,copy) NSArray * linkedContacts; 
@property (nonatomic,copy) NSString * linkIdentifier; 
@property (assign,nonatomic) CGRect cropRect; 
@property (nonatomic,copy) NSData * thumbnailImageData; 
@property (nonatomic,copy) NSString * cropRectID;                                            //@synthesize cropRectID=_cropRectID - In the implementation block
@property (nonatomic,copy) NSData * cropRectHash;                                            //@synthesize cropRectHash=_cropRectHash - In the implementation block
@property (nonatomic,copy) NSData * fullscreenImageData; 
@property (nonatomic,copy) NSData * syncImageData; 
@property (nonatomic,copy) CNActivityAlert * callAlert; 
@property (nonatomic,copy) CNActivityAlert * textAlert; 
@property (nonatomic,copy) NSString * phonemeData; 
@property (nonatomic,copy) NSString * phoneticCompanyName; 
@property (nonatomic,copy) NSString * externalURI; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSData * externalRepresentation; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * externalUUID; 
@property (nonatomic,copy) NSString * externalImageURI; 
@property (nonatomic,copy) NSString * mapsData; 
@property (nonatomic,readonly) BOOL hasChanges;                                              //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,copy) NSString * pronunciationGivenName; 
@property (nonatomic,copy) NSString * pronunciationFamilyName; 
@property (nonatomic,copy) NSString * preferredLikenessSource; 
@property (nonatomic,copy) NSString * preferredApplePersonaIdentifier; 
@property (nonatomic,copy) NSString * preferredChannel; 
@property (nonatomic,copy) NSString * downtimeWhitelist; 
@property (nonatomic,copy) NSString * imageType; 
@property (nonatomic,copy) NSData * imageHash; 
@property (assign,nonatomic) long long contactType; 
@property (nonatomic,copy) NSString * namePrefix; 
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * familyName; 
@property (nonatomic,copy) NSString * previousFamilyName; 
@property (nonatomic,copy) NSString * nameSuffix; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * organizationName; 
@property (nonatomic,copy) NSString * departmentName; 
@property (nonatomic,copy) NSString * jobTitle; 
@property (nonatomic,copy) NSString * phoneticGivenName; 
@property (nonatomic,copy) NSString * phoneticMiddleName; 
@property (nonatomic,copy) NSString * phoneticFamilyName; 
@property (nonatomic,copy) NSString * phoneticOrganizationName; 
@property (nonatomic,copy) NSString * note; 
@property (nonatomic,copy) NSData * imageData; 
@property (nonatomic,copy) NSArray * phoneNumbers; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,copy) NSArray * postalAddresses; 
@property (nonatomic,copy) NSArray * urlAddresses; 
@property (nonatomic,copy) NSArray * contactRelations; 
@property (nonatomic,copy) NSArray * socialProfiles; 
@property (nonatomic,copy) NSArray * instantMessageAddresses; 
@property (nonatomic,copy) NSDateComponents * birthday; 
@property (nonatomic,copy) NSDateComponents * nonGregorianBirthday; 
@property (nonatomic,copy) NSArray * dates; 
+(id)unifyContacts:(id)arg1 ;
+(id)imageDataDescriptions;
+(void)freezeIfInstancetypeIsImmutable:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
-(BOOL)hasChanges;
-(NSDate *)modificationDate;
-(id)freeze;
-(NSData *)imageData;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setSnapshot:(CNContact *)arg1 ;
-(NSString *)imageType;
-(NSArray *)phoneNumbers;
-(NSString *)mapsData;
-(NSArray *)emailAddresses;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setInstantMessageAddresses:(NSArray *)arg1 ;
-(NSArray *)instantMessageAddresses;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(void)setImageType:(NSString *)arg1 ;
-(void)setNote:(NSString *)arg1 ;
-(NSString *)note;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSString *)organizationName;
-(void)setOrganizationName:(NSString *)arg1 ;
-(long long)contactType;
-(NSString *)phonemeData;
-(void)setPhonemeData:(NSString *)arg1 ;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(NSString *)phoneticMiddleName;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(BOOL)imageDataAvailable;
-(NSString *)departmentName;
-(NSString *)jobTitle;
-(NSArray *)postalAddresses;
-(NSArray *)urlAddresses;
-(NSArray *)contactRelations;
-(NSDateComponents *)birthday;
-(NSArray *)dates;
-(void)setBirthday:(NSDateComponents *)arg1 ;
-(void)setContactRelations:(NSArray *)arg1 ;
-(void)setDates:(NSArray *)arg1 ;
-(void)setDepartmentName:(NSString *)arg1 ;
-(void)setJobTitle:(NSString *)arg1 ;
-(NSDateComponents *)nonGregorianBirthday;
-(void)setNonGregorianBirthday:(NSDateComponents *)arg1 ;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(void)setUrlAddresses:(NSArray *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSArray *)socialProfiles;
-(NSArray *)calendarURIs;
-(NSString *)cardDAVUID;
-(NSString *)preferredLikenessSource;
-(NSString *)preferredApplePersonaIdentifier;
-(NSData *)imageHash;
-(void)setMaidenName:(NSString *)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)setCalendarURIs:(NSArray *)arg1 ;
-(void)setActivityAlerts:(NSDictionary *)arg1 ;
-(void)setImageHash:(NSData *)arg1 ;
-(void)setRelatedNames:(NSArray *)arg1 ;
-(void)setCardDAVUID:(NSString *)arg1 ;
-(void)setPreferredLikenessSource:(NSString *)arg1 ;
-(void)setPreferredApplePersonaIdentifier:(NSString *)arg1 ;
-(NSString *)externalURI;
-(void)setExternalURI:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)linkIdentifier;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setContactType:(long long)arg1 ;
-(CNContactKeyVector *)availableKeyDescriptor;
-(NSData *)externalRepresentation;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(NSString *)externalUUID;
-(void)setExternalUUID:(NSString *)arg1 ;
-(NSString *)externalImageURI;
-(void)setExternalImageURI:(NSString *)arg1 ;
-(NSString *)previousFamilyName;
-(void)setPreviousFamilyName:(NSString *)arg1 ;
-(NSString *)phoneticGivenName;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(NSString *)phoneticFamilyName;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(NSString *)phoneticOrganizationName;
-(void)setPhoneticOrganizationName:(NSString *)arg1 ;
-(NSString *)pronunciationGivenName;
-(void)setPronunciationGivenName:(NSString *)arg1 ;
-(NSString *)pronunciationFamilyName;
-(void)setPronunciationFamilyName:(NSString *)arg1 ;
-(NSString *)sectionForSortingByGivenName;
-(void)setSectionForSortingByGivenName:(NSString *)arg1 ;
-(NSString *)sectionForSortingByFamilyName;
-(void)setSectionForSortingByFamilyName:(NSString *)arg1 ;
-(CGRect)cropRect;
-(NSData *)fullscreenImageData;
-(void)_setFullscreenImageData:(id)arg1 ;
-(NSData *)syncImageData;
-(void)setSyncImageData:(NSData *)arg1 ;
-(void)setImageDataAvailable:(BOOL)arg1 ;
-(void)setLinkIdentifier:(NSString *)arg1 ;
-(void)setPreferredForName:(BOOL)arg1 ;
-(void)setPreferredForImage:(BOOL)arg1 ;
-(CNActivityAlert *)callAlert;
-(void)setCallAlert:(CNActivityAlert *)arg1 ;
-(CNActivityAlert *)textAlert;
-(void)setTextAlert:(CNActivityAlert *)arg1 ;
-(void)setMapsData:(NSString *)arg1 ;
-(NSString *)preferredChannel;
-(void)setPreferredChannel:(NSString *)arg1 ;
-(NSString *)downtimeWhitelist;
-(void)setDowntimeWhitelist:(NSString *)arg1 ;
-(void)setFrozenSelfAsSnapshot;
-(id)freezeWithSelfAsSnapshot;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(void)setAvailableKeyDescriptor:(CNContactKeyVector *)arg1 ;
-(void)setFullscreenImageData:(NSData *)arg1 ;
-(id)selfOrMutableCopy;
-(void)updateImageDataAvailableFromCurrentState;
-(void)resetToNewContact;
-(void)overwriteStateFromContact:(id)arg1 ;
-(id)copyWithSelfAsSnapshot;
-(void)setPhoneticCompanyName:(NSString *)arg1 ;
-(NSString *)searchIndex;
-(void)setSearchIndex:(NSString *)arg1 ;
-(BOOL)preferredForName;
-(BOOL)preferredForImage;
-(void)updateStateFromContact:(id)arg1 ;
-(void)removeKeys:(id)arg1 ;
-(NSString *)cropRectID;
-(void)setCropRectID:(NSString *)arg1 ;
-(NSData *)cropRectHash;
-(void)setCropRectHash:(NSData *)arg1 ;
-(void)setNameTitle:(NSString *)arg1 ;
@end


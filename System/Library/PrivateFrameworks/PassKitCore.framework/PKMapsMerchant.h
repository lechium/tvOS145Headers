/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSString, NSURL, CNPostalAddress, MKWalletMerchantStylingInfo, NSDate, CLLocation;

@interface PKMapsMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	int _resultProviderIdentifier;
	unsigned long long _identifier;
	NSString* _name;
	NSString* _phoneNumber;
	NSURL* _url;
	double _locationLatitude;
	double _locationLongitude;
	CNPostalAddress* _postalAddress;
	NSURL* _heroImageURL;
	NSString* _heroImageAttributionName;
	long long _category;
	NSString* _detailedCategory;
	MKWalletMerchantStylingInfo* _stylingInfo;
	NSURL* _businessChatURL;
	NSDate* _lastProcessedDate;

}

@property (assign,nonatomic) unsigned long long identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int resultProviderIdentifier;                           //@synthesize resultProviderIdentifier=_resultProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (setter=setURL:,nonatomic,copy) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) double locationLatitude;                                //@synthesize locationLatitude=_locationLatitude - In the implementation block
@property (assign,nonatomic) double locationLongitude;                               //@synthesize locationLongitude=_locationLongitude - In the implementation block
@property (nonatomic,copy) CNPostalAddress * postalAddress;                          //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,copy) NSURL * heroImageURL;                                     //@synthesize heroImageURL=_heroImageURL - In the implementation block
@property (nonatomic,copy) NSString * heroImageAttributionName;                      //@synthesize heroImageAttributionName=_heroImageAttributionName - In the implementation block
@property (assign,nonatomic) long long category;                                     //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * detailedCategory;                              //@synthesize detailedCategory=_detailedCategory - In the implementation block
@property (nonatomic,retain) MKWalletMerchantStylingInfo * stylingInfo;              //@synthesize stylingInfo=_stylingInfo - In the implementation block
@property (nonatomic,copy) NSURL * businessChatURL;                                  //@synthesize businessChatURL=_businessChatURL - In the implementation block
@property (nonatomic,copy) NSDate * lastProcessedDate;                               //@synthesize lastProcessedDate=_lastProcessedDate - In the implementation block
@property (nonatomic,copy) CLLocation * location; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(void)_deleteDeviceDataFromCloudStoreRecord:(id)arg1 ;
+(void)deleteFromCloudStoreRecord:(id)arg1 codingType:(unsigned long long)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)identifier;
-(void)setURL:(id)arg1 ;
-(NSURL *)url;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(unsigned long long)itemType;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)jsonRepresentation;
-(CNPostalAddress *)postalAddress;
-(void)setPostalAddress:(CNPostalAddress *)arg1 ;
-(id)primaryIdentifier;
-(NSURL *)heroImageURL;
-(void)setHeroImageURL:(NSURL *)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2 ;
-(id)recordTypesAndNamesForCodingType:(unsigned long long)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(int)resultProviderIdentifier;
-(void)setResultProviderIdentifier:(int)arg1 ;
-(void)_encodeDeviceDataForCloudStoreCoder:(id)arg1 ;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg1 ;
-(BOOL)hasCloudArchivableDeviceData;
-(NSString *)detailedCategory;
-(void)setDetailedCategory:(NSString *)arg1 ;
-(MKWalletMerchantStylingInfo *)stylingInfo;
-(void)setStylingInfo:(MKWalletMerchantStylingInfo *)arg1 ;
-(NSString *)heroImageAttributionName;
-(void)setHeroImageAttributionName:(NSString *)arg1 ;
-(NSURL *)businessChatURL;
-(void)setBusinessChatURL:(NSURL *)arg1 ;
-(NSDate *)lastProcessedDate;
-(void)setLastProcessedDate:(NSDate *)arg1 ;
-(double)locationLatitude;
-(double)locationLongitude;
-(void)setLocationLatitude:(double)arg1 ;
-(void)setLocationLongitude:(double)arg1 ;
-(id)_jsonEncodedPostalAddressString;
-(BOOL)isEqualToMapsMerchant:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFActionItem.h>
@class NSString, NSArray, SFPunchout, NSData, SFImage, SFLatLng, NSURL, NSDictionary;


@protocol SFActionItem <NSObject>
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * labelForLocalMedia; 
@property (assign,nonatomic) BOOL isOverlay; 
@property (nonatomic,copy) NSArray * storeIdentifiers; 
@property (assign,nonatomic) BOOL requiresLocalMedia; 
@property (nonatomic,copy) NSString * localMediaIdentifier; 
@property (nonatomic,retain) SFPunchout * punchout; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSData * mapsData; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,copy) NSString * offerType; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * labelITunes; 
@property (assign,nonatomic) BOOL isITunes; 
@property (nonatomic,retain) SFImage * icon; 
@property (nonatomic,retain) SFImage * baseIcon; 
@property (nonatomic,retain) SFLatLng * location; 
@property (nonatomic,copy) NSString * messageIdentifier; 
@property (nonatomic,copy) NSURL * messageURL; 
@property (nonatomic,copy) NSString * persistentID; 
@property (assign,nonatomic) int mediaEntityType; 
@property (nonatomic,copy) NSString * universalLibraryID; 
@property (nonatomic,copy) NSString * interactionContentType; 
@property (nonatomic,retain) SFPunchout * customDirectionsPunchout; 
@property (assign,nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute; 
@property (assign,nonatomic) int directionsMode; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)phoneNumber;
-(void)setProvider:(id)arg1;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(NSString *)provider;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1;
-(void)setLatitude:(double)arg1;
-(SFImage *)icon;
-(void)setIcon:(id)arg1;
-(NSString *)contactIdentifier;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(void)setPhoneNumber:(id)arg1;
-(NSString *)email;
-(void)setEmail:(id)arg1;
-(NSString *)persistentID;
-(void)setPersistentID:(id)arg1;
-(SFLatLng *)location;
-(void)setLocation:(id)arg1;
-(NSData *)mapsData;
-(BOOL)shouldSearchDirectionsAlongCurrentRoute;
-(void)setContactIdentifier:(id)arg1;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(id)arg1;
-(void)setMapsData:(id)arg1;
-(NSString *)offerType;
-(void)setMessageURL:(id)arg1;
-(NSURL *)messageURL;
-(SFPunchout *)punchout;
-(void)setPunchout:(id)arg1;
-(NSData *)jsonData;
-(void)setLabelForLocalMedia:(id)arg1;
-(void)setIsOverlay:(BOOL)arg1;
-(void)setRequiresLocalMedia:(BOOL)arg1;
-(void)setLocalMediaIdentifier:(id)arg1;
-(void)setOfferType:(id)arg1;
-(void)setLabelITunes:(id)arg1;
-(void)setIsITunes:(BOOL)arg1;
-(void)setBaseIcon:(id)arg1;
-(void)setMediaEntityType:(int)arg1;
-(void)setUniversalLibraryID:(id)arg1;
-(void)setInteractionContentType:(id)arg1;
-(void)setCustomDirectionsPunchout:(id)arg1;
-(void)setShouldSearchDirectionsAlongCurrentRoute:(BOOL)arg1;
-(void)setDirectionsMode:(int)arg1;
-(NSString *)labelForLocalMedia;
-(BOOL)isOverlay;
-(NSArray *)storeIdentifiers;
-(BOOL)requiresLocalMedia;
-(NSString *)localMediaIdentifier;
-(NSString *)labelITunes;
-(BOOL)isITunes;
-(SFImage *)baseIcon;
-(int)mediaEntityType;
-(NSString *)universalLibraryID;
-(NSString *)interactionContentType;
-(SFPunchout *)customDirectionsPunchout;
-(int)directionsMode;
-(void)setStoreIdentifiers:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SFPunchout, NSData, SFImage, SFLatLng, NSURL, NSDictionary;

@interface SFActionItem : NSObject <SFActionItem, NSSecureCoding, NSCopying> {

	SCD_Struct_SF1 _has;
	BOOL _isOverlay;
	BOOL _requiresLocalMedia;
	BOOL _isITunes;
	BOOL _shouldSearchDirectionsAlongCurrentRoute;
	int _mediaEntityType;
	int _directionsMode;
	NSString* _label;
	NSString* _labelForLocalMedia;
	NSArray* _storeIdentifiers;
	NSString* _localMediaIdentifier;
	SFPunchout* _punchout;
	NSString* _applicationBundleIdentifier;
	NSString* _contactIdentifier;
	NSString* _phoneNumber;
	NSString* _email;
	NSData* _mapsData;
	double _latitude;
	double _longitude;
	NSString* _provider;
	NSString* _offerType;
	NSString* _type;
	NSString* _labelITunes;
	SFImage* _icon;
	SFImage* _baseIcon;
	SFLatLng* _location;
	NSString* _messageIdentifier;
	NSURL* _messageURL;
	NSString* _persistentID;
	NSString* _universalLibraryID;
	NSString* _interactionContentType;
	SFPunchout* _customDirectionsPunchout;

}

@property (nonatomic,copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * labelForLocalMedia;                               //@synthesize labelForLocalMedia=_labelForLocalMedia - In the implementation block
@property (assign,nonatomic) BOOL isOverlay;                                            //@synthesize isOverlay=_isOverlay - In the implementation block
@property (nonatomic,copy) NSArray * storeIdentifiers;                                  //@synthesize storeIdentifiers=_storeIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL requiresLocalMedia;                                   //@synthesize requiresLocalMedia=_requiresLocalMedia - In the implementation block
@property (nonatomic,copy) NSString * localMediaIdentifier;                             //@synthesize localMediaIdentifier=_localMediaIdentifier - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                                     //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                      //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * email;                                            //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSData * mapsData;                                           //@synthesize mapsData=_mapsData - In the implementation block
@property (assign,nonatomic) double latitude;                                           //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                          //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSString * provider;                                         //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSString * offerType;                                        //@synthesize offerType=_offerType - In the implementation block
@property (nonatomic,copy) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * labelITunes;                                      //@synthesize labelITunes=_labelITunes - In the implementation block
@property (assign,nonatomic) BOOL isITunes;                                             //@synthesize isITunes=_isITunes - In the implementation block
@property (nonatomic,retain) SFImage * icon;                                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) SFImage * baseIcon;                                        //@synthesize baseIcon=_baseIcon - In the implementation block
@property (nonatomic,retain) SFLatLng * location;                                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * messageIdentifier;                                //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * messageURL;                                          //@synthesize messageURL=_messageURL - In the implementation block
@property (nonatomic,copy) NSString * persistentID;                                     //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) int mediaEntityType;                                       //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (nonatomic,copy) NSString * universalLibraryID;                               //@synthesize universalLibraryID=_universalLibraryID - In the implementation block
@property (nonatomic,copy) NSString * interactionContentType;                           //@synthesize interactionContentType=_interactionContentType - In the implementation block
@property (nonatomic,retain) SFPunchout * customDirectionsPunchout;                     //@synthesize customDirectionsPunchout=_customDirectionsPunchout - In the implementation block
@property (assign,nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute;              //@synthesize shouldSearchDirectionsAlongCurrentRoute=_shouldSearchDirectionsAlongCurrentRoute - In the implementation block
@property (assign,nonatomic) int directionsMode;                                        //@synthesize directionsMode=_directionsMode - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)phoneNumber;
-(void)setProvider:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)provider;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(SFImage *)icon;
-(void)setIcon:(SFImage *)arg1 ;
-(NSString *)contactIdentifier;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)persistentID;
-(void)setPersistentID:(NSString *)arg1 ;
-(SFLatLng *)location;
-(void)setLocation:(SFLatLng *)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(NSData *)mapsData;
-(BOOL)shouldSearchDirectionsAlongCurrentRoute;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(void)setMapsData:(NSData *)arg1 ;
-(NSString *)offerType;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setMessageURL:(NSURL *)arg1 ;
-(NSURL *)messageURL;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(NSData *)jsonData;
-(void)setLabelForLocalMedia:(NSString *)arg1 ;
-(void)setIsOverlay:(BOOL)arg1 ;
-(void)setRequiresLocalMedia:(BOOL)arg1 ;
-(void)setLocalMediaIdentifier:(NSString *)arg1 ;
-(void)setOfferType:(NSString *)arg1 ;
-(void)setLabelITunes:(NSString *)arg1 ;
-(void)setIsITunes:(BOOL)arg1 ;
-(void)setBaseIcon:(SFImage *)arg1 ;
-(void)setMediaEntityType:(int)arg1 ;
-(void)setUniversalLibraryID:(NSString *)arg1 ;
-(void)setInteractionContentType:(NSString *)arg1 ;
-(void)setCustomDirectionsPunchout:(SFPunchout *)arg1 ;
-(void)setShouldSearchDirectionsAlongCurrentRoute:(BOOL)arg1 ;
-(void)setDirectionsMode:(int)arg1 ;
-(NSString *)labelForLocalMedia;
-(BOOL)isOverlay;
-(NSArray *)storeIdentifiers;
-(BOOL)requiresLocalMedia;
-(NSString *)localMediaIdentifier;
-(NSString *)labelITunes;
-(BOOL)isITunes;
-(SFImage *)baseIcon;
-(int)mediaEntityType;
-(NSString *)universalLibraryID;
-(NSString *)interactionContentType;
-(SFPunchout *)customDirectionsPunchout;
-(int)directionsMode;
-(void)setStoreIdentifiers:(NSArray *)arg1 ;
-(BOOL)hasShouldSearchDirectionsAlongCurrentRoute;
-(BOOL)hasIsOverlay;
-(BOOL)hasRequiresLocalMedia;
-(BOOL)hasIsITunes;
-(BOOL)hasMediaEntityType;
-(BOOL)hasDirectionsMode;
@end


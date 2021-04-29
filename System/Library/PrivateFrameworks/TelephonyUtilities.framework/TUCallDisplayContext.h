/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponents, NSString, NSArray;

@interface TUCallDisplayContext : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	int _legacyAddressBookIdentifier;
	NSPersonNameComponents* _personNameComponents;
	NSString* _suggestedName;
	NSString* _companyName;
	NSString* _mapName;
	NSString* _location;
	NSString* _contactName;
	NSString* _contactLabel;
	NSString* _callDirectoryLabel;
	NSString* _callDirectoryLocalizedExtensionContainingAppName;
	NSString* _callDirectoryExtensionIdentifier;
	NSArray* _contactIdentifiers;
	NSString* _name;
	NSString* _label;

}

@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * personNameComponents;                            //@synthesize personNameComponents=_personNameComponents - In the implementation block
@property (nonatomic,copy) NSString * suggestedName;                                                 //@synthesize suggestedName=_suggestedName - In the implementation block
@property (nonatomic,copy) NSString * label;                                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * companyName;                                                   //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,copy) NSString * mapName;                                                       //@synthesize mapName=_mapName - In the implementation block
@property (nonatomic,copy) NSString * location;                                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * contactName;                                                   //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,copy) NSString * contactLabel;                                                  //@synthesize contactLabel=_contactLabel - In the implementation block
@property (nonatomic,copy) NSString * callDirectoryLabel;                                            //@synthesize callDirectoryLabel=_callDirectoryLabel - In the implementation block
@property (nonatomic,copy) NSString * callDirectoryLocalizedExtensionContainingAppName;              //@synthesize callDirectoryLocalizedExtensionContainingAppName=_callDirectoryLocalizedExtensionContainingAppName - In the implementation block
@property (nonatomic,copy) NSString * callDirectoryExtensionIdentifier;                              //@synthesize callDirectoryExtensionIdentifier=_callDirectoryExtensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSArray * contactIdentifiers;                                             //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (assign,nonatomic) int legacyAddressBookIdentifier;                                        //@synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)suggestedName;
-(void)setSuggestedName:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)contactIdentifier;
-(NSString *)firstName;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)contactName;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSString *)companyName;
-(void)setContactName:(NSString *)arg1 ;
-(NSString *)contactLabel;
-(void)setContactLabel:(NSString *)arg1 ;
-(NSPersonNameComponents *)personNameComponents;
-(int)legacyAddressBookIdentifier;
-(void)setLegacyAddressBookIdentifier:(int)arg1 ;
-(void)setPersonNameComponents:(NSPersonNameComponents *)arg1 ;
-(NSString *)mapName;
-(NSString *)callDirectoryLabel;
-(NSString *)callDirectoryLocalizedExtensionContainingAppName;
-(NSString *)callDirectoryExtensionIdentifier;
-(void)setMapName:(NSString *)arg1 ;
-(void)setCallDirectoryLabel:(NSString *)arg1 ;
-(void)setCallDirectoryLocalizedExtensionContainingAppName:(NSString *)arg1 ;
-(void)setCallDirectoryExtensionIdentifier:(NSString *)arg1 ;
-(id)displayContextByMergingWithDisplayContext:(id)arg1 ;
@end


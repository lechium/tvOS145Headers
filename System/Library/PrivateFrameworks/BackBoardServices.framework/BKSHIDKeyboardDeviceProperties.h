/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>

@class NSString;

@interface BKSHIDKeyboardDeviceProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable> {

	NSString* _language;
	NSString* _layout;
	unsigned char _countryCode;
	unsigned _standardType;
	long long _subinterfaceID;
	BOOL _capsLockKeyHasLanguageSwitchLabel;

}

@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,copy,readonly) NSString * layout; 
@property (nonatomic,readonly) unsigned char countryCode; 
@property (nonatomic,readonly) unsigned standardType; 
@property (nonatomic,readonly) long long subinterfaceID; 
@property (nonatomic,readonly) BOOL capsLockKeyHasLanguageSwitchLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)build:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)countryCode;
-(NSString *)layout;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(id)initForProtobufDecoding;
-(NSString *)language;
-(unsigned)standardType;
-(long long)subinterfaceID;
-(BOOL)capsLockKeyHasLanguageSwitchLabel;
@end


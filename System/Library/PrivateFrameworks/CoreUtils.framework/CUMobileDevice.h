/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface CUMobileDevice : NSObject <NSCopying> {

	BOOL _connected;
	BOOL _paired;
	BOOL _placeholder;
	NSUUID* _identifier;
	NSString* _internalModel;
	NSString* _name;
	NSString* _udid;
	NSString* _wifiAddress;

}

@property (assign,nonatomic) BOOL connected;                      //@synthesize connected=_connected - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * internalModel;              //@synthesize internalModel=_internalModel - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL paired;                         //@synthesize paired=_paired - In the implementation block
@property (assign,nonatomic) BOOL placeholder;                    //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * udid;                       //@synthesize udid=_udid - In the implementation block
@property (nonatomic,copy) NSString * wifiAddress;                //@synthesize wifiAddress=_wifiAddress - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)connected;
-(BOOL)placeholder;
-(void)setConnected:(BOOL)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(NSString *)udid;
-(NSString *)internalModel;
-(BOOL)paired;
-(NSString *)wifiAddress;
-(void)setInternalModel:(NSString *)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(void)setUdid:(NSString *)arg1 ;
-(void)setWifiAddress:(NSString *)arg1 ;
@end


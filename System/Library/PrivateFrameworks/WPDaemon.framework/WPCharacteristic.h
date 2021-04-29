/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface WPCharacteristic : NSObject <NSSecureCoding> {

	NSUUID* _uuid;
	unsigned long long _properties;
	unsigned long long _permissions;
	NSData* _data;
	long long _writeType;

}

@property (retain) NSUUID * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long properties;               //@synthesize properties=_properties - In the implementation block
@property (assign) unsigned long long permissions;              //@synthesize permissions=_permissions - In the implementation block
@property (retain) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (assign) long long writeType;                         //@synthesize writeType=_writeType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)properties;
-(void)setData:(NSData *)arg1 ;
-(NSUUID *)uuid;
-(void)setProperties:(unsigned long long)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)permissions;
-(void)setPermissions:(unsigned long long)arg1 ;
-(long long)writeType;
-(void)setWriteType:(long long)arg1 ;
@end


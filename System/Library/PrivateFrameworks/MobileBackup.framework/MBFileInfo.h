/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface MBFileInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isDirectory;
	NSString* _path;
	long long _priority;
	NSDictionary* _extendedAttributes;

}

@property (nonatomic,copy) NSString * path;                                //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                             //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,nonatomic) long long priority;                           //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSDictionary * extendedAttributes;              //@synthesize extendedAttributes=_extendedAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fileInfoWithPath:(id)arg1 extendedAttributes:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isDirectory;
-(NSDictionary *)extendedAttributes;
-(void)setExtendedAttributes:(NSDictionary *)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(id)initWithPath:(id)arg1 extendedAttributes:(id)arg2 ;
@end


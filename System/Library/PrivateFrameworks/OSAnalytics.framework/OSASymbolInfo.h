/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface OSASymbolInfo : NSObject {

	unsigned char _uuid[16];
	NSString* legacy_arch;
	BOOL _isAppleCode;
	unsigned long long _start;
	unsigned long long _size;
	NSString* _path;
	NSString* _name;
	NSString* _cpuArch;

}

@property (assign) unsigned long long start;              //@synthesize start=_start - In the implementation block
@property (assign) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (readonly) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign) BOOL isAppleCode;                      //@synthesize isAppleCode=_isAppleCode - In the implementation block
@property (retain) NSString * cpuArch;                    //@synthesize cpuArch=_cpuArch - In the implementation block
-(NSString *)name;
-(unsigned long long)size;
-(void)setName:(NSString *)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(unsigned long long)start;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setStart:(unsigned long long)arg1 ;
-(id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3 ;
-(void)setCpuArch:(NSString *)arg1 ;
-(id)initWithSharedCache:(unsigned char)arg1 atBaseAddress:(unsigned long long)arg2 ;
-(id)get_uuid;
-(BOOL)isAppleCode;
-(void)setIsAppleCode:(BOOL)arg1 ;
-(NSString *)cpuArch;
@end

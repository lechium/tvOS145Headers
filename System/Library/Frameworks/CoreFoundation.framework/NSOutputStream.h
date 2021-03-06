/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSOutputStream : NSStream {

	unsigned char _reserved[128];

}

@property (readonly) BOOL hasSpaceAvailable; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)outputStreamToMemory;
+(id)outputStreamToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
+(id)outputStreamToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
+(id)outputStreamWithURL:(id)arg1 append:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)hasSpaceAvailable;
-(unsigned long long)_cfTypeID;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(SCD_Struct_NS11)_cfStreamError;
@end


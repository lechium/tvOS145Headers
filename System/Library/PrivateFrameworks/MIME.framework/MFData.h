/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSData, NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {

	NSData* _internal;
	NSString* _path;
	NSData* _parent;
	BOOL _subdata;

}
+(void)setDefaultMappingThresholdInBytes:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)_initWithRange:(NSRange)arg1 from:(id)arg2 retainingParent:(BOOL)arg3 ;
-(BOOL)mf_immutable;
-(id)_initWithData:(id)arg1 maybeMutable:(BOOL)arg2 ;
-(id)_initWithFile:(id)arg1 ;
-(id)initWithImmutableData:(id)arg1 ;
@end


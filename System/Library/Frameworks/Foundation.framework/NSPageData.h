/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSData.h>

@class NSData, NSDate, NSString;

@interface NSPageData : NSData {

	NSData* data;
	NSDate* _originalFileModDate;
	NSString* _originalFilePath;

}
+(void)initialize;
+(long long)_umask;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithDataNoCopy:(id)arg1 ;
-(void)_setOriginalFileInfoFromFileAttributes:(id)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2 ;
-(id)_mappedFile;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5 ;
-(id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2 ;
-(id)deserializer;
-(unsigned long long)writeFd:(long long)arg1 ;
-(unsigned long long)writeFile:(id)arg1 ;
@end


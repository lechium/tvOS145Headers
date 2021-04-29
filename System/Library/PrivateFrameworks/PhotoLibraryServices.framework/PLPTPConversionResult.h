/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PLPTPConversionResult : NSObject {

	NSString* _pathExtension;
	unsigned long long _estimatedFileLength;

}

@property (copy,readonly) NSString * pathExtension;                       //@synthesize pathExtension=_pathExtension - In the implementation block
@property (readonly) unsigned long long estimatedFileLength;              //@synthesize estimatedFileLength=_estimatedFileLength - In the implementation block
-(NSString *)pathExtension;
-(id)initWithPathExtension:(id)arg1 estimatedFileLength:(unsigned long long)arg2 ;
-(unsigned long long)estimatedFileLength;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface EspressoDataFrameMappedFile : NSObject {

	int file_id;
	unsigned long long length;
	NSString* _path;
	char* _basePtr;

}

@property (retain) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign) char* basePtr;                //@synthesize basePtr=_basePtr - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(char*)basePtr;
-(void)setBasePtr:(char*)arg1 ;
@end


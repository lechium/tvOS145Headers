/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PHAPhotoLibraryReference : NSObject {

	NSString* _path;

}

@property (copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(id)init;
-(NSString *)path;
-(id)dictionaryRepresentation;
-(id)initWithLibraryURL:(id)arg1 ;
-(BOOL)isEqualToPhotoLibraryReference:(id)arg1 ;
@end


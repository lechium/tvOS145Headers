/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSURL;

@interface PXFileBackedAssetDescription : NSObject {

	NSMutableDictionary* _descriptionDictionary;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)simpleImageDescriptionWithURL:(id)arg1 ;
-(id)description;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSURL *)url;
@end


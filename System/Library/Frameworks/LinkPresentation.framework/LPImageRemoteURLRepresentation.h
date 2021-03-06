/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface LPImageRemoteURLRepresentation : NSObject {

	unsigned long long _scale;
	NSURL* _URL;

}

@property (nonatomic,readonly) unsigned long long scale;              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL;                    //@synthesize URL=_URL - In the implementation block
-(NSURL *)URL;
-(unsigned long long)scale;
-(id)initWithScale:(unsigned long long)arg1 URL:(id)arg2 ;
@end


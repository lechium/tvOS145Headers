/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MTLMessageFilter;

@interface _MTLMessageNotifier : NSObject {

	MTLMessageFilter* _filter;
	/*^block*/id _handler;

}

@property (retain,readonly) MTLMessageFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (readonly) id handler;                                    //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(id)init:(/*^block*/id)arg1 filter:(id)arg2 ;
-(MTLMessageFilter *)filter;
-(id)handler;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTBinaryFilterProtocol <NSObject>
@property (nonatomic,readonly) unsigned maxFrameSize; 
@required
-(id)initWithInfo:(id)arg1;
-(void)reset;
-(unsigned)maxFrameSize;
-(void)filterFrame:(char**)arg1 size:(unsigned*)arg2 maxSize:(unsigned*)arg3 extraFrame:(/*^block*/id)arg4;

@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel;


@protocol AVFigRoutingContextCommunicationChannelManager <NSObject>
@property (__weak) AVFigRoutingContextOutputContextImpl * parentOutputContextImpl; 
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
@required
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(void)setParentOutputContextImpl:(id)arg1;
-(AVFigRoutingContextOutputContextImpl *)parentOutputContextImpl;

@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class AVOutputContextCommunicationChannel, NSError, AVOutputContext;

@interface MRAVOutputStream : MRAVBufferedOutputStream {

	AVOutputContextCommunicationChannel* _communicationChannel;
	NSError* _streamError;
	BOOL _channelOpen;
	BOOL _channelIsOpen;
	AVOutputContext* _outputContext;
	long long _connectionType;

}

@property (nonatomic,readonly) AVOutputContext * outputContext;                                         //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * communicationChannel;              //@synthesize communicationChannel=_communicationChannel - In the implementation block
@property (getter=isChannelOpen,nonatomic,readonly) BOOL channelOpen;                                   //@synthesize channelOpen=_channelOpen - In the implementation block
@property (nonatomic,readonly) long long connectionType;                                                //@synthesize connectionType=_connectionType - In the implementation block
-(id)description;
-(void)dealloc;
-(id)streamError;
-(BOOL)hasSpaceAvailable;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(long long)connectionType;
-(BOOL)isChannelOpen;
-(id)initWithOutputContext:(id)arg1 connectionType:(long long)arg2 userInfo:(id)arg3 error:(id*)arg4 ;
-(AVOutputContextCommunicationChannel *)communicationChannel;
-(AVOutputContext *)outputContext;
-(void)_outputContextDidCloseCommunicationChannelNotification:(id)arg1 ;
-(id)initWithCommunicationChannel:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/MFOutgoingMessageContent.h>

@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent {

	MFLibraryMessage* _libraryMessage;

}

@property (nonatomic,retain) MFLibraryMessage * libraryMessage;              //@synthesize libraryMessage=_libraryMessage - In the implementation block
-(id)copy;
-(void)dealloc;
-(id)headers;
-(id)libraryContent;
-(void)setLibraryMessage:(MFLibraryMessage *)arg1 ;
-(MFLibraryMessage *)libraryMessage;
@end


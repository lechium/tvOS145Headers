/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaLibraryRequestOperation.h>

@interface TVHKMediaLibraryLoginOperation : TVHKMediaLibraryRequestOperation {

	unsigned _sessionIdentifier;

}

@property (assign,nonatomic) unsigned sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(unsigned)sessionIdentifier;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(id)initWithSessionState:(id)arg1 requestSession:(id)arg2 ;
@end


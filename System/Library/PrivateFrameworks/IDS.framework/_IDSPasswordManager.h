/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/_IDSPasswordManager.h>

@protocol _IDSPasswordManager <NSObject>
@required
-(void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(/*^block*/id)arg4;

@end


@class NSString;

@interface _IDSPasswordManager : NSObject <_IDSPasswordManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end


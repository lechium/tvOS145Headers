/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSInvalidatable.h>

@class TVSObserverSet, NSString;

@interface TVSObserverHandle : NSObject <BSInvalidatable> {

	AB _valid;
	TVSObserverSet* _set;
	unsigned long long _targetPtr;
	id _userInfo;

}

@property (nonatomic,__weak,readonly) TVSObserverSet * set;               //@synthesize set=_set - In the implementation block
@property (nonatomic,readonly) unsigned long long targetPtr;              //@synthesize targetPtr=_targetPtr - In the implementation block
@property (nonatomic,readonly) id userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidHandleSubclass:(Class)arg1 invalidReason:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TVSObserverSet *)set;
-(id)userInfo;
-(void)invalidate;
-(BOOL)isValid;
-(void)invalidateWithOptions:(unsigned long long)arg1 ;
-(id)initWithOwningSet:(id)arg1 target:(id)arg2 userInfo:(id)arg3 ;
-(unsigned long long)targetPtr;
@end

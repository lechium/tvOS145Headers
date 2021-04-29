/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSBundle;

@interface ABSBundle : NSObject {

	NSBundle* _backingBundle;

}

@property (nonatomic,readonly) NSBundle * backingBundle;              //@synthesize backingBundle=_backingBundle - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(Class)classNamed:(id)arg1 ;
-(id)initWithBackingBundle:(id)arg1 ;
-(NSBundle *)backingBundle;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ABSCallbackInvoker : NSObject {

	void* addressBook;
	/*function pointer*/void* callback;
	void* context;

}
+(void)invokeOnThread:(id)arg1 callback:(/*function pointer*/void*)arg2 withAddressBook:(void*)arg3 context:(void*)arg4 ;
-(void)invoke;
@end


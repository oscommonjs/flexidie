//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IGAuthNotificationHelper : NSObject
{
}

+ (void)postUserDidChangeNotificationForUser:(id)arg1;
+ (void)postLogoutAllAccountsSuccessfulNotification;
+ (void)postDidLogoutAllAccountNotificationWithLastLoggedInUserWithPK:(id)arg1 hasSSOEnabledUser:(_Bool)arg2;
+ (void)postWillLogoutCurrentAccountNotificationWithPK:(id)arg1;
+ (void)postDidSwitchUsersNotificationForNewUserPK:(id)arg1 authLogInType:(long long)arg2 entryPoint:(unsigned long long)arg3 updatedNumberOfAccounts:(unsigned long long)arg4;
+ (void)postWillSwitchUsersNotification;

@end


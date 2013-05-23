package tk.boleynsu.homework.weibo;

public class Config
{
	private static String sqlHost;
	private static String sqlUsername;
	private static String sqlPassword;
	private static String sqlDatabase;
	private static String serverHost;
	private static int serverPort;
	static
	{
		Config.setSqlHost("localhost");
		Config.setSqlUsername("root");
		Config.setSqlPassword("iamroot");
		Config.setSqlDatabase("weibo");
		Config.setServerHost("localhost");
		Config.setServerPort(1993);
	}
	public static String getSqlHost() {
		return sqlHost;
	}
	public static void setSqlHost(String sqlHost) {
		Config.sqlHost = sqlHost;
	}
	public static String getSqlUsername() {
		return sqlUsername;
	}
	public static void setSqlUsername(String sqlUsername) {
		Config.sqlUsername = sqlUsername;
	}
	public static String getSqlPassword() {
		return sqlPassword;
	}
	public static void setSqlPassword(String sqlPassword) {
		Config.sqlPassword = sqlPassword;
	}
	public static String getSqlDatabase() {
		return sqlDatabase;
	}
	public static void setSqlDatabase(String sqlDatabase) {
		Config.sqlDatabase = sqlDatabase;
	}
	public static String getServerHost() {
		return serverHost;
	}
	public static void setServerHost(String serverHost) {
		Config.serverHost = serverHost;
	}
	public static int getServerPort() {
		return serverPort;
	}
	public static void setServerPort(int serverPort) {
		Config.serverPort = serverPort;
	}
}